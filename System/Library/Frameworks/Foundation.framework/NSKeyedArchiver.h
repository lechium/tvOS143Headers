/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSCoder.h>

@class NSData;

@interface NSKeyedArchiver : NSCoder {

	void* _stream;
	AQ _flags;
	id _delegate;
	id _containers;
	id _objects;
	id _objRefMap;
	id _replacementMap;
	id _classNameMap;
	id _conditionals;
	id _classes;
	unsigned long long _genericKey;
	void* _cache;
	unsigned long long _cacheSize;
	unsigned long long _estimatedCount;
	void* _reserved2;
	id _visited;
	void* _reserved0;

}

@property (assign) id<NSKeyedArchiverDelegate> delegate; 
@property (assign) unsigned long long outputFormat; 
@property (readonly) NSData * encodedData; 
@property (assign) BOOL requiresSecureCoding; 
+(void)initialize;
+(id)archivedDataWithRootObject:(id)arg1 requiringSecureCoding:(BOOL)arg2 error:(id*)arg3 ;
+(id)archivedDataWithRootObject:(id)arg1 ;
+(BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2 ;
+(void)setClassName:(id)arg1 forClass:(Class)arg2 ;
+(id)classNameForClass:(Class)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)allowsKeyedCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)_encodePropertyList:(id)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id<NSKeyedArchiverDelegate>)delegate;
-(void)setDelegate:(id<NSKeyedArchiverDelegate>)arg1 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 ;
-(BOOL)requiresSecureCoding;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(NSData *)encodedData;
-(id)initRequiringSecureCoding:(BOOL)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(void)encodeRootObject:(id)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(unsigned)systemVersion;
-(void)encodeBycopyObject:(id)arg1 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(void)encodeByrefObject:(id)arg1 ;
-(BOOL)_allowsValueCoding;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setClassName:(id)arg1 forClass:(Class)arg2 ;
-(void)setRequiresSecureCoding:(BOOL)arg1 ;
-(void)finishEncoding;
-(id)_initWithOutput:(id)arg1 ;
-(unsigned long long)outputFormat;
-(id)classNameForClass:(Class)arg1 ;
-(void)_setBlobForCurrentObject:(id)arg1 ;
-(id)_blobForCurrentObject;
-(void)setOutputFormat:(unsigned long long)arg1 ;
@end

