/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DATask <NSObject>
@optional
-(void)setTaskManager:(id)arg1;
-(void)startModal;
-(BOOL)shouldForceNetworking;
-(void)requestCancelTaskWithReason:(int)arg1;
-(BOOL)shouldHoldPowerAssertion;

@required
-(void)finishWithError:(id)arg1;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;

@end

