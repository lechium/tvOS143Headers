/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CCAsyncOperation.h>

@class CCVegaRenderer, NSString;

@interface CCVegaSignalUpdateAsyncOperation : NSObject <CCAsyncOperation> {

	CCVegaRenderer* _renderer;
	NSString* _name;
	id _value;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id value;                                      //@synthesize value=_value - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(CCVegaRenderer *)renderer;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(void)performOperationWithCallback:(/*^block*/id)arg1 ;
@end
