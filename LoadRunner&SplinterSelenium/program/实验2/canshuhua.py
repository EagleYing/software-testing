import time
import xlrd
from splinter import Browser

def read_table(file='search.xls',sheet_index=0):
    data = xlrd.open_workbook(file)
    table = data.sheets()[sheet_index]
    nrows = table.nrows
    list = []
    for i in range(1, nrows):
        row = table.row_values(i)
        list.append(row)
    return list

def doSearch(job):
    with Browser() as browser:
        url = "http://www.baidu.com"
        target = job[0]
        result = job[1]

        browser.visit(url)
        browser.fill('wd', target)
        browser.click_link_by_id('su')

        time.sleep(5)

        if browser.is_text_present(result):
            print("Yes" + result + "website was found!")
        else:
            print("No" + result + "website was not found!")

if __name__ == '__main__':
    list = read_table()
    for k in range(len(list)):
        job = list[k]
        doSearch(job)
