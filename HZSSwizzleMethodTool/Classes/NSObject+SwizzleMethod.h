//
//  HZSAppDelegate.m
//  HZSSwizzleMethodTool
//
//  Created by 1498522607@qq.com on 12/04/2020.
//  Copyright (c) 2020 1498522607@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/message.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSObject (SwizzleMethod)

+ (BOOL)swizzleMethod:(Class)class orgSel:(SEL)origSel swizzSel:(SEL)altSel;
+ (BOOL)swizzleClassMethod:(Class)class orgSel:(SEL)origSel swizzSel:(SEL)altSel;
@end

NS_ASSUME_NONNULL_END
