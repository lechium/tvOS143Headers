/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class _EARFormatter, NSObject, NSLocale;

@interface EMTTokenizer : NSObject {

	_EARFormatter* _formatter;
	NSObject*<OS_dispatch_queue> _queue;
	NSLocale* _outputLocale;

}

@property (nonatomic,readonly) NSLocale * outputLocale;              //@synthesize outputLocale=_outputLocale - In the implementation block
-(id)format:(id)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(id)format:(id)arg1 preToPostItnMap:(id)arg2 ;
-(NSLocale *)outputLocale;
@end
