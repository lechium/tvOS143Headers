/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMXPCMessageTransport <NSObject>
@optional
-(void)updateUserInfo:(id)arg1;
-(void)fetchUserInfo:(/*^block*/id)arg1;

@required
-(void)handleMessage:(id)arg1;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2;

@end

