/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOKitten/IOKObject.h>

@interface IOKIterator : IOKObject {

	/*^block*/id _enumerationBlock;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)nextObject;
-(BOOL)isValid;
-(void)reset;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)initWithIterator:(unsigned)arg1 ;
-(id)initWithIOObject:(unsigned)arg1 ;
-(id)initWithIterator:(unsigned)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)enumerate;
@end

