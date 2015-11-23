//
//  TestModel.h
//  LxDBAnythingDemo
//
//  Created by DeveloperLx on 15/11/23.
//  Copyright © 2015年 DeveloperLx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestModel : NSObject

@property (nonatomic,retain) id object;
@property (nonatomic,assign) CGPoint point;
@property (nonatomic,assign) CGSize size;
@property (nonatomic,assign) CGRect rect;
@property (nonatomic,assign) NSRange range;
@property (nonatomic,assign) CGAffineTransform affineTransform;
@property (nonatomic,assign) UIEdgeInsets edgeInsets;
@property (nonatomic,assign) Class clazz;
@property (nonatomic,assign) NSInteger integer;
@property (nonatomic,assign) CGFloat flt;
@property (nonatomic,assign) BOOL bl;
@property (nonatomic,assign) char chr;

@property (nonatomic,retain) NSArray * array;
@property (nonatomic,retain) NSDictionary * dictionary;
@property (nonatomic,retain) NSSet * set;
@property (nonatomic,retain) NSOrderedSet * orderSet;

@end
