/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AKAnisetteProvisioningClientProtocol.h>

@protocol AKAnisetteServiceProtocol;
@class NSString;

@interface _AKAnisetteProviderProxy : NSObject <AKAnisetteProvisioningClientProtocol> {

	id<AKAnisetteServiceProtocol> _anisetteDataProvider;

}

@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProvider:(id)arg1 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)provisionAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)eraseAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
@end
