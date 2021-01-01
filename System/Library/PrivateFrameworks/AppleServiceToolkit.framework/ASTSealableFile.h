/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, NSData;

@interface ASTSealableFile : NSObject {

	NSURL* _fileURL;
	BOOL _sealed;
	NSString* _base64Signature;
	NSData* _signature;

}

@property (nonatomic,retain) NSString * base64Signature;               //@synthesize base64Signature=_base64Signature - In the implementation block
@property (nonatomic,retain) NSData * signature;                       //@synthesize signature=_signature - In the implementation block
@property (assign,getter=isSealed,nonatomic) BOOL sealed;              //@synthesize sealed=_sealed - In the implementation block
@property (nonatomic,retain) NSURL * fileURL; 
+(id)sealedFileURL:(id)arg1 signature:(id)arg2 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 ;
-(NSString *)base64Signature;
-(BOOL)isSealed;
-(BOOL)sealWithFileSigner:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setBase64Signature:(NSString *)arg1 ;
-(void)setSealed:(BOOL)arg1 ;
@end

