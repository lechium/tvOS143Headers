/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (nonatomic,readonly) NSKnownKeysMappingStrategy * mapping; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)newInstanceWithSearchStrategy:(id)arg1 inData:(id)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(const id*)values;
-(void)getObjects:(id*)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(void)setValues:(id*)arg1 ;
-(id)initForKeys:(id)arg1 ;
-(id)initWithSearchStrategy:(id)arg1 ;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(NSKnownKeysMappingStrategy *)mapping;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end
