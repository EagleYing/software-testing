#coding=utf-8
import time
from splinter import Browser
import unittest

class Test(unittest.TestCase):
    def test1(self):
        with Browser() as browser:
            # Visit URL
            url = "http://www.baidu.com"
            browser.visit(url)
            browser.fill('wd', 'splinter - python acceptance testing for web applications')
            time.sleep( 10 )
            browser.click_link_by_id('su')

            if browser.is_text_present('splinter.readthedocs.io'):
                print("Yes, the official website was found!")
            else:
                print("No, it wasn't found... We need to improve our SEO techniques")

if __name__ == '__main__':
    unittest.main()