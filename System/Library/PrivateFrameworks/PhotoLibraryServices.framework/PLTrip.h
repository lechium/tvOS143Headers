/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PLTrip : NSObject {

	unsigned long long _type;
	NSArray* _items;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(id)description;
-(unsigned long long)type;
-(double)duration;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 type:(unsigned long long)arg2 ;
-(id)typeDescription;
@end
