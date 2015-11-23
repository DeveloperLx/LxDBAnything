//
//  ViewController.m
//  LxDBAnythingDemo
//
//  Created by DeveloperLx on 15/10/24.
//  Copyright © 2015年 DeveloperLx. All rights reserved.
//

#import "ViewController.h"
#import "LxDBAnything.h"
#import "TestModel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    id obj = self.view;
    LxDBAnyVar(obj);
    
    CGPoint point = CGPointMake(12.34, 56.78);
    LxDBAnyVar(point);
    
    CGSize size = CGSizeMake(87.6, 5.43);
    LxDBAnyVar(size);
    
    CGRect rect = CGRectMake(2.3, 4.5, 5.6, 7.8);
    LxDBAnyVar(rect);
    
    NSRange range = NSMakeRange(3, 56);
    LxDBAnyVar(range);
    
    CGAffineTransform affineTransform = CGAffineTransformMake(1, 2, 3, 4, 5, 6);
    LxDBAnyVar(affineTransform);
        
    UIEdgeInsets edgeInsets = UIEdgeInsetsMake(3, 4, 5, 6);
    LxDBAnyVar(edgeInsets);
    
    SEL sel = @selector(viewDidLoad);
    LxDBAnyVar(sel);
    
    Class class = [UIBarButtonItem class];
    LxDBAnyVar(class);
    
    NSInteger i = 231;
    LxDBAnyVar(i);
    
    CGFloat f = M_E;
    LxDBAnyVar(f);
    
    BOOL b = YES;
    LxDBAnyVar(b);
    
    char c = 'S';
    LxDBAnyVar(c);
    
    CGColorSpaceRef colorSpaceRef = CGColorSpaceCreateDeviceRGB();
    LxDBAnyVar(colorSpaceRef);
    
    //  ......
    
    LxPrintAnything(You can use macro LxPrintAnything() print any without quotation as you want!);
    
    LxPrintf(@"Print format string you customed: %@", LxBox(affineTransform));
    
    NSLog(@"Even use general NSLog function to print: %@", LxBox(edgeInsets));
    
    LxPrintf(@"The type of obj is %@", LxTypeStringOfVar(obj));
    LxPrintf(@"The type of point is %@", LxTypeStringOfVar(point));
    LxPrintf(@"The type of size is %@", LxTypeStringOfVar(size));
    LxPrintf(@"The type of rect is %@", LxTypeStringOfVar(rect));
    LxPrintf(@"The type of range is %@", LxTypeStringOfVar(range));
    LxPrintf(@"The type of affineTransform is %@", LxTypeStringOfVar(affineTransform));
    LxPrintf(@"The type of edgeInsets is %@", LxTypeStringOfVar(edgeInsets));
    LxPrintf(@"The type of class is %@", LxTypeStringOfVar(class));
    LxPrintf(@"The type of i is %@", LxTypeStringOfVar(i));
    LxPrintf(@"The type of f is %@", LxTypeStringOfVar(f));
    LxPrintf(@"The type of b is %@", LxTypeStringOfVar(b));
    LxPrintf(@"The type of c is %@", LxTypeStringOfVar(c));
    LxPrintf(@"The type of colorSpaceRef is %@", LxTypeStringOfVar(colorSpaceRef));
    
    //  ......
    
    TestModel * testModel = [[TestModel alloc]init];
    testModel.array = @[@1, @"fewfwe", @{@21423.654:@[@"fgewgweg", [UIView new]]}, @YES];
    testModel.dictionary = @{@YES:@[[UITableViewCell new], @"fgewgweg", @-543.64]};
    testModel.set = [NSSet setWithObjects:@NO, @4.325, @{@"fgewgweg":[UIView new]}, nil];
    testModel.orderSet = [NSOrderedSet orderedSetWithObjects:@{@21423.654:@[@"fgewgweg", [UIView new]]}, @1, @"fewfwe", @YES, nil];
    
    LxDBObjectAsJson(testModel);
    LxDBObjectAsXml(testModel);
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
    LxDBViewHierarchy(self.view.window);    
}

@end
