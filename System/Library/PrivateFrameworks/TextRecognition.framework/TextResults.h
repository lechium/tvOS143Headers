/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableArray;

@interface TextResults : NSObject {

	NSArray* _cols;
	NSMutableArray* _mutableCols;

}

@property (nonatomic,retain) NSMutableArray * mutableCols;              //@synthesize mutableCols=_mutableCols - In the implementation block
@property (nonatomic,retain) NSArray * cols;                            //@synthesize cols=_cols - In the implementation block
@property (readonly) unsigned long long colCount; 
-(id)init;
-(NSArray *)cols;
-(void)setCols:(NSArray *)arg1 ;
-(unsigned long long)colCount;
-(void)addColumn:(id)arg1 ;
-(void)sortCols;
-(id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableCols;
-(void)setMutableCols:(NSMutableArray *)arg1 ;
@end

