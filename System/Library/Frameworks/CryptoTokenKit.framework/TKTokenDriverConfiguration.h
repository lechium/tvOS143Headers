/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TKTokenConfigurationConnection, NSString, NSDictionary;

@interface TKTokenDriverConfiguration : NSObject {

	TKTokenConfigurationConnection* _configurationConnection;
	NSString* _classID;

}

@property (nonatomic,readonly) NSString * classID;                                   //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tokenConfigurations; 
+(id)driverConfigurationsWithClient:(id)arg1 ;
+(id)driverConfigurations;
-(id)beginTransaction;
-(NSString *)classID;
-(id)initWithClassID:(id)arg1 configurationConnection:(id)arg2 ;
-(id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(BOOL)arg2 ;
-(NSDictionary *)tokenConfigurations;
-(id)addTokenConfigurationForTokenInstanceID:(id)arg1 ;
-(void)removeTokenConfigurationForTokenInstanceID:(id)arg1 ;
@end

