/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/_PASSqliteRowIdIndexSetCursor.h>

@class NSOrderedSet;

@interface _PASSqliteNSOrderedSetCursor : _PASSqliteRowIdIndexSetCursor

@property (nonatomic,retain) NSOrderedSet * collection; 
+(const char*)sqliteMethodName;
+(const char*)sqliteCreateTableStatement;
+(id)planningInfoForValueConstraint:(int)arg1 ;
-(void)setCollection:(NSOrderedSet *)arg1 ;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
@end

