/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CCVegaMarkInterface.h>

@class NSString, CALayer, JSValue;

@interface CCVegaMark : NSObject <CCVegaMarkInterface> {

	JSValue* _items;
	JSValue* mark;

}

@property (retain) JSValue * mark; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,readonly) BOOL clip; 
@property (nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) NSString * marktype; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * role; 
@property (nonatomic,readonly) double zindex; 
@property (nonatomic,retain) CALayer * caLayer; 
@property (assign,nonatomic) BOOL isDirty; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isDirty;
-(unsigned long long)itemCount;
-(NSString *)role;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(BOOL)clip;
-(void)setMark:(JSValue *)arg1 ;
-(BOOL)interactive;
-(void)setIsDirty:(BOOL)arg1 ;
-(JSValue *)mark;
-(CALayer *)caLayer;
-(id)initWithJSValue:(id)arg1 ;
-(id)getString:(id)arg1 defaultValue:(id)arg2 ;
-(double)zindex;
-(void)setCaLayer:(CALayer *)arg1 ;
-(NSString *)marktype;
@end

