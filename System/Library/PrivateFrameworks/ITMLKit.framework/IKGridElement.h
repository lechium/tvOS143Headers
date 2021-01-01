/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement {

	BOOL _paged;

}

@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) NSString * rowHeight; 
@property (getter=isPaged,nonatomic,readonly) BOOL paged;                   //@synthesize paged=_paged - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount; 
-(unsigned long long)columnCount;
-(unsigned long long)rowCount;
-(NSString *)rowHeight;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(BOOL)isPaged;
@end

