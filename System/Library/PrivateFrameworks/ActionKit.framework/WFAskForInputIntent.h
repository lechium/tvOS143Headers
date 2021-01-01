/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>

@class NSString, NSNumber, NSURL, NSDateComponents;

@interface WFAskForInputIntent : INIntent

@property (nonatomic,copy) NSString * question; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * stringAnswer; 
@property (nonatomic,copy) NSNumber * numberAnswer; 
@property (nonatomic,copy) NSURL * urlAnswer; 
@property (nonatomic,copy) NSString * defaultURLAnswer; 
@property (nonatomic,copy) NSDateComponents * dateAnswer; 
@property (nonatomic,copy) NSDateComponents * timeAnswer; 
@property (nonatomic,copy) NSDateComponents * dateAndTimeAnswer; 
@property (nonatomic,copy) NSNumber * allowsDecimalNumbers; 
@property (nonatomic,copy) NSNumber * allowsNegativeNumbers; 
@end

