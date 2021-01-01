/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@class NSArray, NSMapTable;

@interface TSKMappingFormatter : NSFormatter {

	NSArray* _inputs;
	NSMapTable* _mapping;

}

@property (nonatomic,copy) NSMapTable * mapping;                   //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSMapTable *)mapping;
-(NSArray *)inputs;
-(void)setMapping:(NSMapTable *)arg1 ;
-(id)initWithInputs:(id)arg1 outputs:(id)arg2 ;
@end
