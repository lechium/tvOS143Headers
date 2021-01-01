/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _UIDebugReportFormatter : NSObject {

	unsigned long long _indentLevel;
	NSString* _indentString;
	unsigned long long _extraBodyIndentLevel;

}

@property (assign,nonatomic) unsigned long long indentLevel;                       //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * indentString;                                //@synthesize indentString=_indentString - In the implementation block
@property (assign,nonatomic) unsigned long long extraBodyIndentLevel;              //@synthesize extraBodyIndentLevel=_extraBodyIndentLevel - In the implementation block
+(id)defaultFormatter;
-(id)init;
-(void)setIndentLevel:(unsigned long long)arg1 ;
-(id)stringFromReportComponents:(id)arg1 ;
-(unsigned long long)indentLevel;
-(NSString *)indentString;
-(void)setIndentString:(NSString *)arg1 ;
-(unsigned long long)extraBodyIndentLevel;
-(void)setExtraBodyIndentLevel:(unsigned long long)arg1 ;
@end

