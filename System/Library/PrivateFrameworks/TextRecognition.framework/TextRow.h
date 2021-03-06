/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface TextRow : NSObject <NSCopying> {

	NSMutableArray* _mutableTokens;
	double _cachedScore;

}

@property (nonatomic,retain) NSMutableArray * mutableTokens;              //@synthesize mutableTokens=_mutableTokens - In the implementation block
@property (assign) double cachedScore;                                    //@synthesize cachedScore=_cachedScore - In the implementation block
@property (nonatomic,retain,readonly) NSArray * tokens; 
@property (readonly) unsigned long long tokenCount; 
@property (readonly) NSString * string; 
@property (readonly) double score; 
@property (readonly) NSArray * features; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)string;
-(double)score;
-(NSArray *)features;
-(NSArray *)tokens;
-(void)addToken:(id)arg1 ;
-(unsigned long long)tokenCount;
-(void)setMutableTokens:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTokens;
-(double)cachedScore;
-(void)setCachedScore:(double)arg1 ;
@end

