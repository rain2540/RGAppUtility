//
//  NSDate+RGAppUtils.h
//  RGAppUtils
//
//  Created by RAIN on 2017/8/16.
//  Copyright © 2017年 Smartech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Timestamp)

/**
 某个时间对应的时间戳
 
 @return 时间戳
 */
- (NSTimeInterval)rg_timestamp;

/**
 *  描述某个时间对应的时间戳的字符串
 *
 *  @return 表示时间戳的字符串
 */
- (NSString *)rg_stringOfTimestamp;

/**
 当前时间对应的时间戳
 
 @return 当前时间的时间戳
 */
+ (NSTimeInterval)rg_timestampForNow;

/**
 返回描述实时对应的时间戳的字符串
 
 @return 描述实时对应的时间戳的字符串
 */
+ (NSString *)rg_stringOfTimestampForNow;

@end

@interface NSDate (Elements)

/**
 获取 Date 对象中的元素 年
 
 @return NSInteger 类型的 年 值
 */
- (NSInteger)rg_year;

/**
 获取 Date 对象中的元素 月
 
 @return NSInteger 类型的 月 值
 */
- (NSInteger)rg_month;

/**
 获取 Date 对象中的元素 日
 
 @return NSInteger 类型的 日 值
 */
- (NSInteger)rg_day;

/**
 获取 Date 对象中的元素 小时
 
 @return NSInteger 类型的 小时 值
 */
- (NSInteger)rg_hour;

/**
 获取 Date 对象中的元素 分钟
 
 @return NSInteger 类型的 分钟 值
 */
- (NSInteger)rg_minute;

/**
 获取 Date 对象中的元素 秒
 
 @return NSInteger 类型的 秒 值
 */
- (NSInteger)rg_second;

@end

@interface NSDate (Trans)

/**
 通过时间字符串构建对象

 @param dateString 时间字符串
 @return 时间对象
 */
+ (NSDate *)rg_dateFromString:(NSString *)dateString;

/**
 时间对应的字符串

 @return 表示时间的字符串
 */
- (NSString *)rg_dateString;

/**
 秒数转化为格式化时间 (HH:mm:ss)

 @param totalSecond 总秒数
 @param hasHour 是否含有小时字段
 @return 格式化的时间字符串
 */
+ (NSString *)rg_secondFormatTime:(NSInteger)totalSecond
                          hasHour:(BOOL)hasHour;

@end
