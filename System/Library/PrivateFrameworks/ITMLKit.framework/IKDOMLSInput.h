/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMLSInput.h>

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput> {

	BOOL _certifiedText;
	id _byteStream;
	NSString* _stringData;
	NSString* _encoding;

}

@property (nonatomic,retain) id byteStream;                      //@synthesize byteStream=_byteStream - In the implementation block
@property (nonatomic,retain) NSString * stringData;              //@synthesize stringData=_stringData - In the implementation block
@property (nonatomic,retain) NSString * encoding;                //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) BOOL certifiedText;                 //@synthesize certifiedText=_certifiedText - In the implementation block
-(NSString *)encoding;
-(void)setEncoding:(NSString *)arg1 ;
-(NSString *)stringData;
-(id)byteStream;
-(void)setByteStream:(id)arg1 ;
-(void)setStringData:(NSString *)arg1 ;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1 ;
@end

