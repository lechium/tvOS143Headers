/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, _EARLanguageDetectorRequestContext;

@interface _EARLanguageDetectorLoggingInfo : NSObject {

	NSDictionary* _loggingDict;
	_EARLanguageDetectorRequestContext* _context;

}

@property (nonatomic,copy) NSDictionary * loggingDict;                                //@synthesize loggingDict=_loggingDict - In the implementation block
@property (nonatomic,copy) _EARLanguageDetectorRequestContext * context;              //@synthesize context=_context - In the implementation block
-(_EARLanguageDetectorRequestContext *)context;
-(void)setContext:(_EARLanguageDetectorRequestContext *)arg1 ;
-(NSDictionary *)loggingDict;
-(void)setLoggingDict:(NSDictionary *)arg1 ;
@end

