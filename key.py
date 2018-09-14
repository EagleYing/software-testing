import xlrd
import time
from selenium import webdriver

def read_table(file = 'keyword.xls', sheet_index = 0):
    data = xlrd.open_workbook(file)
    table = data.sheets()[sheet_index]
    nrows = table.nrows
    list = []
    for i in range(1, nrows):
        row = table.row_values(i)
        list.append(row)
    return list

def openBrowser(firstParam, secondParam):
    webdriver.get(url = firstParam + "/")
    webdriver.find_element_by_id("kw").click()
    webdriver.find_element_by_id("kw").clear()
    webdriver.find_element_by_id("kw").send_keys(secondParam)
    webdriver.find_element_by_id("su").click()

def goNextPage():
    webdriver.find_element_by_link_text(u"下一页>").click()

def select(firstParam, secondParam):
    list = webdriver.find_elements_by_xpath('//div/h3/a')
    if firstParam:
        list[int(firstParam)-1].click()
        time.sleep(2)

    if secondParam:
        list[int(secondParam)-1].click()

def doTestJob(job):
    jobType = job[0]
    if jobType == 'open':
        openBrowser(job[1], job[2])
    elif jobType == 'nextPage':
        goNextPage()
    elif jobType == 'seletItem':
        select(job[1], job[2])

if __name__ == '__main__':
    webdriver = webdriver.Firefox()
    list = read_table()
    for k in range(len(list)):
        job = list[k]
        doTestJob(job)
        time.sleep(5)

    webdriver.quit()