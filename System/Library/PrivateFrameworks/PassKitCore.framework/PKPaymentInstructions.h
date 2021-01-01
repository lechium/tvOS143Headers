/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSData, NSDictionary, NSArray;

@interface PKPaymentInstructions : NSObject {

	long long _version;
	NSData* _instructionsData;
	NSData* _signatureData;
	NSData* _fortifiedInstructionsData;
	NSData* _fortifiedSignatureData;
	NSDictionary* _instructionsDictionary;

}

@property (nonatomic,retain) NSDictionary * instructionsDictionary;              //@synthesize instructionsDictionary=_instructionsDictionary - In the implementation block
@property (nonatomic,retain) NSData * instructionsData;                          //@synthesize instructionsData=_instructionsData - In the implementation block
@property (nonatomic,retain) NSData * signatureData;                             //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,retain) NSData * fortifiedInstructionsData;                 //@synthesize fortifiedInstructionsData=_fortifiedInstructionsData - In the implementation block
@property (nonatomic,retain) NSData * fortifiedSignatureData;                    //@synthesize fortifiedSignatureData=_fortifiedSignatureData - In the implementation block
@property (nonatomic,readonly) long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * allImageKeys; 
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(CGImageRef)imageForKey:(id)arg1 ;
-(void)setSignatureData:(NSData *)arg1 ;
-(NSData *)signatureData;
-(NSArray *)allImageKeys;
-(id)_imageDataForImageWithKey:(id)arg1 format:(id*)arg2 ;
-(CGDataProviderRef)_createImageDataProviderForImageKey:(id)arg1 ;
-(NSData *)instructionsData;
-(NSData *)fortifiedInstructionsData;
-(NSData *)fortifiedSignatureData;
-(void)_pruneDirectoryAtURL:(id)arg1 ;
-(BOOL)archiveToDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)setInstructionsData:(NSData *)arg1 ;
-(void)setFortifiedInstructionsData:(NSData *)arg1 ;
-(void)setFortifiedSignatureData:(NSData *)arg1 ;
-(NSDictionary *)instructionsDictionary;
-(void)setInstructionsDictionary:(NSDictionary *)arg1 ;
@end

