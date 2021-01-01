/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface AXMAudioSession : NSObject {

	NSMutableArray* _notificationObserverTokens;

}

@property (nonatomic,retain) NSMutableArray * notificationObserverTokens;              //@synthesize notificationObserverTokens=_notificationObserverTokens - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setNotificationObserverTokens:(NSMutableArray *)arg1 ;
-(NSMutableArray *)notificationObserverTokens;
-(BOOL)deactivateSessionWithError:(id*)arg1 ;
-(BOOL)activateSessionWithError:(id*)arg1 ;
@end
