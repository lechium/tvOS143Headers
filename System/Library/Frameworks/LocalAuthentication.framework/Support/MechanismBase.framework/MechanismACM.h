/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MechanismBase/MechanismBase-Structs.h>
#import <MechanismBase/MechanismBase.h>

@interface MechanismACM : MechanismBase {

	ACMHandleRef _acmContext;
	unsigned long long _acmFlags;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;                  //@synthesize acmContext=_acmContext - In the implementation block
@property (nonatomic,readonly) unsigned long long acmFlags;              //@synthesize acmFlags=_acmFlags - In the implementation block
-(ACMHandleRef)acmContext;
-(id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 acmContextRecord:(id)arg3 request:(id)arg4 ;
-(unsigned long long)acmFlags;
@end
