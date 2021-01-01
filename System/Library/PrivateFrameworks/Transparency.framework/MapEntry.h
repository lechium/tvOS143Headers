/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyMapEntryVerifier, TransparencyManagedDataStore, NSDictionary, SignedMapHead, NSMutableArray, NSData;

@interface MapEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyMapEntryVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) NSDictionary * metadata; 
@property (nonatomic,retain) SignedMapHead * smh; 
@property (assign,nonatomic) BOOL hasSmh; 
@property (nonatomic,retain) NSMutableArray * hashesOfPeersInPathToRootArray; 
@property (nonatomic,readonly) unsigned long long hashesOfPeersInPathToRootArray_Count; 
@property (nonatomic,copy) NSData * mapLeaf; 
+(id)descriptor;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(TransparencyMapEntryVerifier *)verifier;
-(void)setVerifier:(TransparencyMapEntryVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end
