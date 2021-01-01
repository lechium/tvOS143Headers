/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDictionary;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying> {

	NSData* _encodedTreatmentDefinition;
	NSString* _encodedTreatmentDefinitionSignature;
	NSData* _publicCertificate;
	NSDictionary* _assetURLs;

}

@property (nonatomic,readonly) NSData * encodedTreatmentDefinition;                         //@synthesize encodedTreatmentDefinition=_encodedTreatmentDefinition - In the implementation block
@property (nonatomic,readonly) NSString * encodedTreatmentDefinitionSignature;              //@synthesize encodedTreatmentDefinitionSignature=_encodedTreatmentDefinitionSignature - In the implementation block
@property (nonatomic,readonly) NSData * publicCertificate;                                  //@synthesize publicCertificate=_publicCertificate - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetURLs;                                    //@synthesize assetURLs=_assetURLs - In the implementation block
+(id)artifactWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3 assetURLs:(id)arg4 ;
+(id)artifactFromCKRecordFields:(id)arg1 loadAssetUrls:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)assetURLs;
-(id)initWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3 assetURLs:(id)arg4 ;
-(NSData *)encodedTreatmentDefinition;
-(NSString *)encodedTreatmentDefinitionSignature;
-(NSData *)publicCertificate;
-(BOOL)isEqualToArtifact:(id)arg1 ;
-(id)copyWithReplacementEncodedTreatmentDefinition:(id)arg1 ;
-(id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)arg1 ;
-(id)copyWithReplacementPublicCertificate:(id)arg1 ;
-(id)copyWithReplacementAssetURLs:(id)arg1 ;
-(BOOL)isValidWithTreatmentId:(id)arg1 ;
-(id)unsignedAssetURLs;
@end
