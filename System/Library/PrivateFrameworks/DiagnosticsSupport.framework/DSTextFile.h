/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DSTextFileEnumeratorControl.h>

@class NSFileHandle, NSMutableArray, NSData;

@interface DSTextFile : NSObject <DSTextFileEnumeratorControl> {

	BOOL _cancelEnumeration;
	BOOL _isEnumerating;
	NSFileHandle* _fileHandle;
	unsigned long long _bufferSize;
	NSMutableArray* _linePositions;
	NSData* _lineBreak;
	long long _skipCount;
	unsigned long long _currentLineIndex;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;                        //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                    //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * linePositions;                   //@synthesize linePositions=_linePositions - In the implementation block
@property (nonatomic,retain) NSData * lineBreak;                               //@synthesize lineBreak=_lineBreak - In the implementation block
@property (assign,nonatomic) BOOL cancelEnumeration;                           //@synthesize cancelEnumeration=_cancelEnumeration - In the implementation block
@property (assign,nonatomic) long long skipCount;                              //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) BOOL isEnumerating;                               //@synthesize isEnumerating=_isEnumerating - In the implementation block
@property (assign,nonatomic) unsigned long long currentLineIndex;              //@synthesize currentLineIndex=_currentLineIndex - In the implementation block
+(id)textFileWithPath:(id)arg1 ;
-(id)init;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)end;
-(void)seekToOffset:(unsigned long long)arg1 ;
-(unsigned long long)currentOffset;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(unsigned long long)bufferSize;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(long long)skipCount;
-(void)setSkipCount:(long long)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
-(void)setLineBreak:(NSData *)arg1 ;
-(NSData *)lineBreak;
-(id)initWithFilePath:(id)arg1 withBufferSize:(unsigned long long)arg2 ;
-(void)setIsEnumerating:(BOOL)arg1 ;
-(BOOL)advanceToNextLine:(id*)arg1 ;
-(unsigned long long)currentLineIndex;
-(BOOL)isEnumerating;
-(void)resetEnumerator;
-(void)setCurrentLineIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)linePositions;
-(unsigned long long)getOffsetAtLineIndex:(unsigned long long)arg1 ;
-(id)extractLine:(unsigned long long)arg1 ;
-(BOOL)searchForNextLineFromCurrentPosition:(id*)arg1 ;
-(void)skipWithLines:(long long)arg1 ;
-(void)enumerateUsingBlock:(/*^block*/id)arg1 ;
-(void)seekToBeginning;
-(void)setLinePositions:(NSMutableArray *)arg1 ;
-(BOOL)cancelEnumeration;
-(void)setCancelEnumeration:(BOOL)arg1 ;
@end

