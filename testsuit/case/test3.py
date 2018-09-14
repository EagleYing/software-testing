import xlrd
import time
from selenium import webdriver
import unittest

def read_table(file = 'keyword.xls', sheet_index = 0):
    data = xlrd.open_workbook(file)
    table = data.sheets()[sheet_index]
    nrows = table.nrows
    list = []
    for i in range(1, nrows):
        row = table.row_values(i)
        list.append(row)
    return list

def openBrowser(firstParam, secondParam,driver):
    driver.get(url = firstParam + "/")
    driver.find_element_by_id("kw").click()
    driver.find_element_by_id("kw").clear()
    driver.find_element_by_id("kw").send_keys(secondParam)
    driver.find_element_by_id("su").click()

def goNextPage(driver):
    driver.find_element_by_link_text(u"下一页>").click()

def select(firstParam, secondParam,driver):
    list = driver.find_elements_by_xpath('//div/h3/a')
    if firstParam:
        list[int(firstParam)-1].click()
        time.sleep(2)

    if secondParam:
        list[int(secondParam)-1].click()

def doTestJob(job,driver):
    jobType = job[0]
    if jobType == 'open':
        openBrowser(job[1], job[2],driver)
    elif jobType == 'nextPage':
        goNextPage(driver)
    elif jobType == 'seletItem':
        select(job[1], job[2],driver)

class Test(unittest.TestCase):
    def test3(self):
        driver = webdriver.Firefox()
        list = read_table()
        for k in range(len(list)):
            job = list[k]
            doTestJob(job,driver)
            time.sleep(5)

        driver.quit()