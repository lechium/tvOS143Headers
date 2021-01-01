/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding> {

	NSString* _semantic;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSString * semantic;                   //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)infoWithSemantic:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)semantic;
-(void)setSemantic:(NSString *)arg1 ;
@end

