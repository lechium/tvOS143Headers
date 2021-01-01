/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {

	CKDServerConfiguration* _configuration;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(CKDServerConfiguration *)configuration;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(id)url;
-(long long)serverType;
-(long long)partitionType;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
@end
