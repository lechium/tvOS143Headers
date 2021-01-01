/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSProgress;

@interface _CopyfileCallbackCtx : NSObject {

	BOOL _doArchive;
	BOOL _doUnarchive;
	NSProgress* _progress;
	unsigned long long _generationSize;

}

@property (assign,nonatomic) BOOL doArchive;                                 //@synthesize doArchive=_doArchive - In the implementation block
@property (assign,nonatomic) BOOL doUnarchive;                               //@synthesize doUnarchive=_doUnarchive - In the implementation block
@property (assign,nonatomic) unsigned long long generationSize;              //@synthesize generationSize=_generationSize - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
-(NSProgress *)progress;
-(id)initWithPath:(const char*)arg1 error:(id*)arg2 ;
-(void)setDoArchive:(BOOL)arg1 ;
-(void)setDoUnarchive:(BOOL)arg1 ;
-(unsigned long long)generationSize;
-(void)setGenerationSize:(unsigned long long)arg1 ;
-(BOOL)doArchive;
-(BOOL)doUnarchive;
@end

