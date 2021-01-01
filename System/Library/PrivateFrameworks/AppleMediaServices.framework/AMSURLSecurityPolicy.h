/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSSet;

@interface AMSURLSecurityPolicy : NSObject {

	long long _trustMode;
	NSSet* _pinnedCertificates;

}

@property (assign,nonatomic) long long trustMode;                     //@synthesize trustMode=_trustMode - In the implementation block
@property (nonatomic,retain) NSSet * pinnedCertificates;              //@synthesize pinnedCertificates=_pinnedCertificates - In the implementation block
+(id)defaultPolicy;
-(id)initWithTrustMode:(long long)arg1 ;
-(id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2 ;
-(long long)trustMode;
-(BOOL)_evaluateExtendedValidationWithTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(BOOL)_evaluatePinnedCertificatesWithTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(BOOL)_shouldSkipValidation;
-(NSSet *)pinnedCertificates;
-(BOOL)evaluateTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(void)setTrustMode:(long long)arg1 ;
-(void)setPinnedCertificates:(NSSet *)arg1 ;
@end

