/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CNVCardPropertyItem : NSObject {

	id _value;
	NSString* _label;
	NSString* _identifier;

}

@property (readonly) id value;                           //@synthesize value=_value - In the implementation block
@property (readonly) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)itemWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
-(id)description;
-(NSString *)identifier;
-(id)value;
-(NSString *)label;
-(id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
@end

