/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface FKTextCandidate : NSObject {

	float _confidence;
	NSString* _text;

}

@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (readonly) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
-(void)dealloc;
-(float)confidence;
-(NSString *)text;
-(id)initWithText:(id)arg1 confidence:(float)arg2 ;
@end

