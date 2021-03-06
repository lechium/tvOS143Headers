/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <KnowledgeGraphKit/MAFloatMatrix.h>

@class _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper;

@interface MAMutableFloatMatrix : MAFloatMatrix

@property (nonatomic,readonly) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper * wrapper; 
+(Class)wrapperClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendRow:(id)arg1 ;
-(void)subtractScalar:(float)arg1 ;
-(void)addScalar:(float)arg1 ;
-(void)setFloat:(float)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)subtractMatrix:(id)arg1 ;
@end

