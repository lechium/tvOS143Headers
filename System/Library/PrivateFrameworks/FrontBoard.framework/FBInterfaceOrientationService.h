/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject {

	long long _interfaceOrientation;
	FBInterfaceOrientationServiceServer* _server;

}

@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(id)sharedInstance;
-(id)init;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
@end

