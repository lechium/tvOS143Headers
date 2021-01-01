/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVStackRow : NSObject {

	BOOL _hosted;
	BOOL _bounded;
	long long _sectionIndex;
	TVRowMetrics _rowMetrics;

}

@property (assign,nonatomic) TVRowMetrics rowMetrics;                    //@synthesize rowMetrics=_rowMetrics - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                //@synthesize hosted=_hosted - In the implementation block
@property (assign,getter=isBounded,nonatomic) BOOL bounded;              //@synthesize bounded=_bounded - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                     //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isHosted;
-(void)setSectionIndex:(long long)arg1 ;
-(long long)sectionIndex;
-(void)setHosted:(BOOL)arg1 ;
-(BOOL)isBounded;
-(TVRowMetrics)rowMetrics;
-(void)setRowMetrics:(TVRowMetrics)arg1 ;
-(void)setBounded:(BOOL)arg1 ;
@end

