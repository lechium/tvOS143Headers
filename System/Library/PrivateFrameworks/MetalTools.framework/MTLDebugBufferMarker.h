/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MetalTools/MetalTools-Structs.h>
@class NSString;

@interface MTLDebugBufferMarker : NSObject {

	NSString* _label;
	NSRange _range;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) NSRange range;               //@synthesize range=_range - In the implementation block
-(void)dealloc;
-(NSRange)range;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
@end

