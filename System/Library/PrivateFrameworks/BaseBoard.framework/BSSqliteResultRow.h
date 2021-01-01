/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface BSSqliteResultRow : NSObject <BSInvalidatable, NSCopying> {

	sqlite3_stmtRef _statement;
	NSArray* _columnNames;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
@end

