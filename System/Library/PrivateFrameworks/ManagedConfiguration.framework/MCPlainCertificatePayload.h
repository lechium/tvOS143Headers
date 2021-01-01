/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {

	NSString* _certificateFileName;
	NSData* _certificateData;
	NSString* _password;
	int _dataEncoding;

}

@property (nonatomic,retain,readonly) NSString * certificateFileName;              //@synthesize certificateFileName=_certificateFileName - In the implementation block
@property (nonatomic,retain,readonly) NSData * certificateData;                    //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,readonly) int dataEncoding;                                   //@synthesize dataEncoding=_dataEncoding - In the implementation block
@property (nonatomic,retain,readonly) NSString * password;                         //@synthesize password=_password - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)password;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)verboseDescription;
-(SecCertificateRef)copyCertificate;
-(id)installationWarnings;
-(BOOL)isIdentity;
-(BOOL)isSigned;
-(id)persistentResourceID;
-(NSString *)certificateFileName;
-(int)dataEncoding;
-(NSData *)certificateData;
@end

