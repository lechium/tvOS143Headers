/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification

@property (nonatomic,readonly) PLChangeNotificationCenter * changeNotificationCenter; 
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(PLChangeNotificationCenter *)changeNotificationCenter;
-(void)_calculateDiffs;
@end
