#coding=utf-8
import time
from splinter import Browser

#test1 init
with Browser() as browser:
    # Visit URL
    url = "http://www.baidu.com"
    browser.visit(url)
    browser.fill('wd', 'splinter - python acceptance testing for web applications')
    # Find and click the 'search' button
    # button = browser.find_by_id('su')
    # Interact with elements
    time.sleep( 10 )
    browser.click_link_by_id('su')

    if browser.is_text_present('splinter.readthedocs.io'):
        print("Yes, the official website was found!")
    else:
        print("No, it wasn't found... We need to improve our SEO techniques")

# from splinter import Browser
#
# with Browser() as browser:
#     # Visit URL
#     url = "http://www.google.com"
#     browser.visit(url)
#     browser.fill('q', 'splinter - python acceptance testing for web applications')
#     # Find and click the 'search' button
#     # Interact with elements
#     print(browser.find_by_name('btnG'))
#     browser.click_link_by_id('btnG')
#     if browser.is_text_present('splinter.readthedocs.io'):
#         print("Yes, the results was found!")
#     else:
#         print("No, it wasn't found...")