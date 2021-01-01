/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTInclusionProofVerifier, TransparencyManagedDataStore, NSDictionary, NSData, MapEntry, LogEntry;

@interface InclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) NSDictionary * metadata; 
@property (nonatomic,copy) NSData * uriVrfoutput; 
@property (nonatomic,retain) MapEntry * mapEntry; 
@property (assign,nonatomic) BOOL hasMapEntry; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) BOOL hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(KTInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTInclusionProofVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
-(id)mapLeafWithError:(id*)arg1 ;
@end

