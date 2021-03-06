/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface APSMultiUserMode : NSObject {

	BOOL _isMultiUser;
	BOOL _isLoggedInUser;

}

@property (nonatomic,readonly) BOOL isMultiUser;                 //@synthesize isMultiUser=_isMultiUser - In the implementation block
@property (nonatomic,readonly) BOOL isLoggedInUser;              //@synthesize isLoggedInUser=_isLoggedInUser - In the implementation block
+(id)sharedInstance;
+(BOOL)_getMultiUserMode;
+(BOOL)_getIsCurrentlyLoggedIn;
-(id)initWithIsMultiUserMode:(BOOL)arg1 loggedInUser:(BOOL)arg2 ;
-(BOOL)isMultiAndLoggedIn;
-(BOOL)isMultiUser;
-(BOOL)isLoggedInUser;
@end

