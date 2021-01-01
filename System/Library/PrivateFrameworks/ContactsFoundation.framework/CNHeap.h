/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSMutableDictionary;

@interface CNHeap : NSObject {

	NSString* _rawDataString;
	NSMutableArray* _heapObjects;
	NSMutableDictionary* _heapObjectsByClassAndBinary;

}

@property (retain) NSString * rawDataString;                                                 //@synthesize rawDataString=_rawDataString - In the implementation block
@property (retain) NSMutableArray * heapObjects;                                             //@synthesize heapObjects=_heapObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * heapObjectsByClassAndBinary;              //@synthesize heapObjectsByClassAndBinary=_heapObjectsByClassAndBinary - In the implementation block
-(NSString *)rawDataString;
-(void)setRawDataString:(NSString *)arg1 ;
-(NSMutableArray *)heapObjects;
-(void)setHeapObjects:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)heapObjectsByClassAndBinary;
-(void)setHeapObjectsByClassAndBinary:(NSMutableDictionary *)arg1 ;
@end
