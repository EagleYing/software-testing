from threading import Thread
from selenium import webdriver
from time import ctime, sleep

def test_baidu(browser, search):
    print('start:%s' % ctime())
    print('browser:%s' % browser)
    if browser == 'chrome':
        driver = webdriver.Firefox()
    elif browser == 'ff':
        driver = webdriver.Firefox()
    else:
        print("browser error, it could only be ie, ff, chrome")

    driver.get("https://www.baidu.com")
    driver.find_element_by_id("kw").send_keys(search)
    driver.find_element_by_id("su").click()
    sleep(2)
    driver.quit()

if __name__ == '__main__':
    lists = {'chrome': 'Threading', 'ff': 'Python'}

    threads = []
    files = range(len(lists))

    for browser, search in lists.items():
        t = Thread(target=test_baidu, args=(browser, search))
        threads.append(t)

    for t in files:
        threads[t].start()
    for t in files:
        threads[t].join()

    print('end:%s' % ctime())
