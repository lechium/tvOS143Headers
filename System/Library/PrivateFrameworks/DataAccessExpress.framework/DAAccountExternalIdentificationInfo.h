/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface DAAccountExternalIdentificationInfo : NSObject {

	BOOL _useSSL;
	NSString* _host;
	long long _port;
	NSArray* _ownerAddresses;
	NSString* _preferredOwnerAddress;

}

@property (nonatomic,copy,readonly) NSString * host;                               //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) long long port;                                     //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                        //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ownerAddresses;                      //@synthesize ownerAddresses=_ownerAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredOwnerAddress;              //@synthesize preferredOwnerAddress=_preferredOwnerAddress - In the implementation block
-(NSString *)host;
-(long long)port;
-(BOOL)useSSL;
-(NSArray *)ownerAddresses;
-(id)initWithHost:(id)arg1 port:(long long)arg2 useSSL:(BOOL)arg3 ownerAddresses:(id)arg4 preferredOwnerAddress:(id)arg5 ;
-(NSString *)preferredOwnerAddress;
@end

