/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString, UNNotificationAction;

@interface UNMutableNotificationCategory : UNNotificationCategory

@property (assign,nonatomic) unsigned long long options; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSArray * minimalActions; 
@property (nonatomic,copy) NSArray * intentIdentifiers; 
@property (nonatomic,copy) NSString * hiddenPreviewsBodyPlaceholder; 
@property (nonatomic,copy) NSString * categorySummaryFormat; 
@property (nonatomic,copy) NSString * actionsMenuTitle; 
@property (nonatomic,copy) UNNotificationAction * alternateAction; 
@property (assign,nonatomic) unsigned long long backgroundStyle; 
@property (assign,nonatomic) unsigned long long listPriority; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setMinimalActions:(NSArray *)arg1 ;
-(void)setAlternateAction:(UNNotificationAction *)arg1 ;
-(void)setIntentIdentifiers:(NSArray *)arg1 ;
-(void)setHiddenPreviewsBodyPlaceholder:(NSString *)arg1 ;
-(void)setCategorySummaryFormat:(NSString *)arg1 ;
-(void)setActionsMenuTitle:(NSString *)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(void)setListPriority:(unsigned long long)arg1 ;
@end

