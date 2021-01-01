/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding> {

	BOOL _isContinuousPathConversion;
	int _inSessionAlignmentConfidence;
	NSArray* _alignedKeyboardInputs;
	NSString* _expectedString;
	TIWordEntry* _originalWord;
	NSArray* _alignedTouches;

}

@property (nonatomic,retain) NSArray * alignedTouches;                      //@synthesize alignedTouches=_alignedTouches - In the implementation block
@property (nonatomic,retain) NSArray * alignedKeyboardInputs;               //@synthesize alignedKeyboardInputs=_alignedKeyboardInputs - In the implementation block
@property (nonatomic,copy) NSString * expectedString;                       //@synthesize expectedString=_expectedString - In the implementation block
@property (nonatomic,retain) TIWordEntry * originalWord;                    //@synthesize originalWord=_originalWord - In the implementation block
@property (assign,nonatomic) BOOL isContinuousPathConversion;               //@synthesize isContinuousPathConversion=_isContinuousPathConversion - In the implementation block
@property (assign,nonatomic) int inSessionAlignmentConfidence;              //@synthesize inSessionAlignmentConfidence=_inSessionAlignmentConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isContinuousPathConversion;
-(NSArray *)alignedTouches;
-(NSArray *)alignedKeyboardInputs;
-(void)setAlignedKeyboardInputs:(NSArray *)arg1 ;
-(NSString *)expectedString;
-(void)setExpectedString:(NSString *)arg1 ;
-(TIWordEntry *)originalWord;
-(void)setOriginalWord:(TIWordEntry *)arg1 ;
-(void)setIsContinuousPathConversion:(BOOL)arg1 ;
-(int)inSessionAlignmentConfidence;
-(void)setInSessionAlignmentConfidence:(int)arg1 ;
-(void)setAlignedTouches:(NSArray *)arg1 ;
@end

